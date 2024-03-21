#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char line[1000];
    char *token;

    // 파일 열기
    file = fopen("source.txt", "r");

    // 파일이 열리지 않았을 경우 오류 메시지 출력 후 종료
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }
    // fgets(line, sizeof(line), file) : 한줄 읽어오기
    // strtok(line, " ") : 띄어쓰기를 기준으로 문자열을 분리 , 출력값의 형식은 char* 이다. 포인터로 출력하는 이유는 문자열의 길이가 정해져 있지 않기 때문이다.
    fgets(line, sizeof(line), file);
    token = strtok(line, " \n");
    printf(token);
    // 파일 닫기
    fclose(file);

    return 0;
}
