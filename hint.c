#include "hint.h"
#include "color.h"
#include <stdio.h>

// all kinds of visual hints
static const char* SUCCESS = "\t\t*** 操作成功！ ***";
static const char* FAILURE = "\t\t*** 操作失败！ ***";
static const char* ILLEGAL = "\t\t*** 非法输入！ ***";
static const char* LOADING = "\t\t*** 加载中 ... ***";
static const char* EXITING = "\t\t*** 退出中 ... ***";

static const char* INVALID = "非法！";
void welcomeMessage() {
    printf("\n%s欢迎来到超市管理系统！%s\n\n", BOLD, RESET);
}

void successMessage() { printf("\n%s%s%s\n\n", FRONT_WHITE, SUCCESS, RESET); }
void failureMessage() { printf("\n%s%s%s\a\n\n", FRONT_WHITE, FAILURE, RESET); }
void illegalMessage() { printf("\n%s%s%s\a\n\n", FRONT_WHITE, ILLEGAL, RESET); }
void loadingMessage() { printf("\n%s%s%s\n\n", FRONT_WHITE, LOADING, RESET); }
void exitingMessage() { printf("\n%s%s%s\n\n", FRONT_WHITE, EXITING, RESET); }
void invalidMessage() { 
    printf("\n%s%s%s\n\n", FRONT_WHITE, INVALID, RESET);
    printf("\n%s%sThis Function is Waiting For you to Implement ...%s\n\n", \
        FRONT_WHITE, BOLD, RESET);
}
