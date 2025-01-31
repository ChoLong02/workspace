/*
 * 바이트(Byte): 정보의 최소 단위
 *  - 8 bit = 1 Byte
 *  - bit = 0 or 1
 *  - 모든 프로그래밍 언어는 값을 Byte 표현
 *  - C언어는 int(정수) -> 4 Byte 표현 
 *  - 1 Byte = 2^8 = 0~255(256 표현)
 *  - 값을 표현할 때 큰 Byte를 할당하면 할수록 값의 범위도 커짐
 * 
 * 문자 컴파일
 *  - 문자 → 2진수 형태의 ASCII코드로 변환
 *  - ex) 'A' → 65
 *  - 문자는 소스코드에서만 문자로 표현되고, 컴퓨터 안에서는
 *     정수와 같은 방식으로 처리
 * 
 * 문자 표현 방식
 *  - UTF8(한글 표현)
 *  - 일반적으로 영어 알파벳은 2 Byte 표현
 *  - 일반적으로 한글은 3 Byte 표현
 * 
 * ASCII 코드
 *  - 사람이 사용하는 기호를 컴퓨터 안에서 표현하는 방법
 *  - http://www.ascii-codes.com/
 *
 * 1. 주석(Comment)
 *  - 컴파일 X, 노트정리
 *  - 전처리 단계에서 모두 제거 됨
 * 
 * 2.문장 끝(;)
 *  - 세미콜론(;)을 사용하여 문자 끝을 표시
 *  - 한 줄에 한 문장씩 작성(가독성)
 *  - 들여쓰기 명시하기(Level 확인)
 * 
 * 3.함수()
 *  - 반복적인 작업을 위해 작성한 코드묶음
 *  - ()가 붙어 있음
 *  - ()는 입력, ()안에 void를 적으면 입력 없음 의미
 *  - return은 출력, return을 만나면 함수 종료
 *  - 
 * 
 * 4.printf() and puts
 *  - 출력 함수 
 *  - ()안에 출력하고 싶은 
 * 
 * 
 * C언어 컴파일 과정정
 *  1.컴파일 → 소스코드를 컴파일러를 통해 기계어로 바꾸는 과정
 *  
 *    - 자연어: 사람이 사용하는 언어
 *    - 프로그래밍 언어: 사람이 작성한 소소코드를 사용해서 컴퓨터와 대화할 수 있는 언어
 *      + 종류: C, Python, Java, Javascript 등등
 *    - 기계어: 컴퓨터가 사용하는 언어(0, 1) 
 *  
 *  2.컴파일 과정 3단계
 *    - 소스코드(.c)
 *        ↓
 *    1)전처리
 *      + 지시자(#include)에 따라 프로그램에 필요한 소스 중 외부에 있는 소스를 불러옴
 *        ↓
 *    - 전처리 된 소스파일
 *        ↓
 *    2)컴파일
 *        ↓
 *    - 개체 파일
 *      + CPU가 해석할 수 있는 명령어들로 구성된 기계어
 *      + 그러나 바로 실행 불가 
 *        → 프로그램은 운영체제(OS)에 의해 실행되므로 설치된 운영체제가 인식할 수 있게 변경 필요
 *        ↓
 *    3) 링크
 *      + startup code(프로그램 실행 전 필요한 준비작업)를 결합하는 과정
 *      + startup code에서 main() 함수를 호출
 *      + main() 함수가 작성 된 코드를 실행하게 함
 *        ↓
 *    - 실행파일(.exe)
 */

#include <stdio.h> // <stdio.h> = standard input output

int main(void) {
    printf("Hello C");

    return 0;
}