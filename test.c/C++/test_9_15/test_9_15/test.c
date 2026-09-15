#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 递归函数，从右向左解析
//int evalRPN(char* tokens[], int* index) {
//    // 获取当前 token 并递减索引
//    char* token = tokens[(*index)--];
//
//    // 如果是运算符
//    if (strcmp(token, "+") == 0 || strcmp(token, "-") == 0 ||
//        strcmp(token, "*") == 0 || strcmp(token, "/") == 0) {
//
//        // 从右向左：先遇到的是右操作数
//        int right = evalRPN(tokens, index);
//        int left = evalRPN(tokens, index);
//
//        if (strcmp(token, "+") == 0) return left + right;
//        if (strcmp(token, "-") == 0) return left - right;
//        if (strcmp(token, "*") == 0) return left * right;
//        if (strcmp(token, "/") == 0) return left / right;
//    }
//
//    // 如果是数字，转换为整数返回
//    return atoi(token);
//}
//
//int main() {
//    // 测试用例：等价于 (2 + 1) * 3 = 9
//    char input[] = "2 1 + 3 *";
//    char* tokens[100];
//    int count = 0;
//
//    // 使用 strtok 分割字符串
//    char* token = strtok(input, " ");
//    while (token != NULL) {
//        tokens[count++] = token;
//        token = strtok(NULL, " ");
//    }
//
//    // 从最后一个 token 开始递归
//    int index = count - 1;
//    int result = evalRPN(tokens, &index);
//
//    printf("逆波兰表达式计算结果为: %d\n", result);
//
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 递归函数，从右向左解析
int evalRPN(char* tokens[], int* index) {
    // 获取当前 token 并递减索引
    char* token = tokens[(*index)--];

    // 如果是运算符
    if (strcmp(token, "+") == 0 || strcmp(token, "-") == 0 ||
        strcmp(token, "*") == 0 || strcmp(token, "/") == 0) {

        // 从右向左：先遇到的是右操作数
        int right = evalRPN(tokens, index);
        int left = evalRPN(tokens, index);

        if (strcmp(token, "+") == 0) return left + right;
        if (strcmp(token, "-") == 0) return left - right;
        if (strcmp(token, "*") == 0) return left * right;
        if (strcmp(token, "/") == 0) return left / right;
    }

    // 如果是数字，转换为整数返回
    return atoi(token);
}

int main() {
    // 测试用例：等价于 (2 + 1) * 3 = 9
    char input[] = "2 1 + 3 *";
    char* tokens[100];
    int count = 0;

    // 使用 strtok 分割字符串
    char* token = strtok(input, " ");
    while (token != NULL) {
        tokens[count++] = token;
        token = strtok(NULL, " ");
    }

    // 从最后一个 token 开始递归
    int index = count - 1;
    int result = evalRPN(tokens, &index);

    printf("逆波兰表达式计算结果为: %d\n", result);

    return 0;
}