#include "hint.h"
#include "color.h"
#include <stdio.h>

// all kinds of visual hints
static const char* SUCCESS = "\t\t*** �����ɹ��� ***";
static const char* FAILURE = "\t\t*** ����ʧ�ܣ� ***";
static const char* ILLEGAL = "\t\t*** �Ƿ����룡 ***";
static const char* LOADING = "\t\t*** ������ ... ***";
static const char* EXITING = "\t\t*** �˳��� ... ***";

static const char* INVALID = "�Ƿ���";
void welcomeMessage() {
    printf("\n%s��ӭ�������й���ϵͳ��%s\n\n", BOLD, RESET);
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
