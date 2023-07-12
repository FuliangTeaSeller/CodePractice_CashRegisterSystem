#include "hint.h"
#include "color.h"
#include <stdio.h>

// all kinds of visual hints
static const char* BANNER = "\
\t__          ___           _          __  __            _        _       _\n\
\t\\ \\        / / |         | |        |  \\/  |          | |      | |     | |\n\
\t \\ \\  /\\  / /| |__   __ _| | ___    | \\  / | __ _ _ __| | _____| |_    | |\n\
\t  \\ \\/  \\/ / | '_ \\ / _` | |/ _ \\   | |\\/| |/ _` | '__| |/ / _ \\ __|   | |\n\
\t   \\  /\\  /  | | | | (_| | |  __/   | |  | | (_| | |  |   <  __/ |_    |_|\n\
\t    \\/  \\/   |_| |_|\\__,_|_|\\___|   |_|  |_|\\__,_|_|  |_|\\_\\___|\\__|   (_)\n\
";

static const char* SUCCESS = "\t\t*** �����ɹ��� ***";
static const char* FAILURE = "\t\t*** ����ʧ�ܣ� ***";
static const char* ILLEGAL = "\t\t*** �Ƿ����룡 ***";
static const char* LOADING = "\t\t*** ������ ... ***";
static const char* EXITING = "\t\t*** �˳��� ... ***";

//static const char* INVALID = "\
//\t  _____                           _   _       _   _\n\
//\t |_   _|                         | | (_)     | | | |\n\
//\t   | |    _ __   __   __   __ _  | |  _    __| | | |\n\
//\t   | |   | '_ \\  \\ \\ / /  / _` | | | | |  / _` | | |\n\
//\t  _| |_  | | | |  \\ V /  | (_| | | | | | | (_| | |_|\n\
//\t |_____| |_| |_|   \\_/    \\__,_| |_| |_|  \\__,_| (_)\n\
//";
static const char* INVALID = "�Ƿ���";
void welcomeMessage() {
    printf("\n%s��ӭ�������й���ϵͳ��%s\n\n", BOLD, RESET);
    //printf("\t\t\t\t������B305���ʵѵ9С��%s\n\n", RESET);
}

void successMessage() { printf("\n%s%s%s\n\n", FRONT_GREEN, SUCCESS, RESET); }
void failureMessage() { printf("\n%s%s%s\a\n\n", FRONT_RED, FAILURE, RESET); }
void illegalMessage() { printf("\n%s%s%s\a\n\n", FRONT_RED, ILLEGAL, RESET); }
void loadingMessage() { printf("\n%s%s%s\n\n", FRONT_BLUE, LOADING, RESET); }
void exitingMessage() { printf("\n%s%s%s\n\n", FRONT_RED, EXITING, RESET); }
void invalidMessage() { 
    printf("\n%s%s%s\n\n", FRONT_RED, INVALID, RESET);
    printf("\n%s%sThis Function is Waiting For you to Implement ...%s\n\n", \
FRONT_RED, BOLD, RESET);
}
