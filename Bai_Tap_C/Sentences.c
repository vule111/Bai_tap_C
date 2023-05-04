#include <stdio.h>
#include <string.h>

#define WORDS 1000

int main() {
    char arr[] = "Mot ngoi nha, hai ngoi nha, ba ngoi nha, ba ngoi nha.";
    char *token;
    char words[WORDS][1000]; // 1 mảng 2 chiều gồm words hàng chứa mỗi chuỗi 1000 kí tự
    int count[WORDS] = {0}; //là một mảng gồm WORDS phần tử, mỗi phần tử lưu trữ số lần xuất hiện của từ tương ứng trong mảng words.
    int n = 0;

    // Tokenize the string into words
    token = strtok(arr, " ,."); // hàm tách câu thành từng từ phân tách bởi dấu cách, dấu phẩy, dấu chấm
    while (token != NULL && n < WORDS) {
        strcpy(words[n], token);
        ++n;
        token = strtok(NULL, " ,.");
    }

    // Count the frequency of each word
    for (int i = 0; i < n; ++i) {
        if (strcmp(words[i], "") == 0) {  // kiểm tra chuỗi rỗng k, nếu có thì tiếp tục
            continue;
        }
        int c = 1; // nếu không cho 1 biến c =1 và đi so sanh với j
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(words[i], words[j]) == 0) {
                ++c;
                strcpy(words[j], ""); // nếu tăng lên thì xóa từ trong words đi r so sanh tiếp
            }
        }
        count[i] = c;
    }

    // Print the results
    for (int i = 0; i < n; ++i) {
        if (strcmp(words[i], "") != 0) {
            printf("%s: %d\n", words[i], count[i]);
        }
    }

    return 0;
}
