# C++ - Module 09

## STL

_Summary: This document contains the exercises of Module 09 from C++ modules._

_요약: 이 문서는 C++ 모듈의 09번째 모듈 과제들를 담고 있습니다._

_Version: 2_

# Contents

| Chapter | Contents                                                 | page |
| :-----: | :------------------------------------------------------- | :--: |
|    1    | [**Introduction**](#Chapter-1)                           |  1   |
|    2    | [**General rules**](#Chapter-2)                          |  3   |
|    3    | [**Module-specific rules**](#Chapter-3)                  |  5   |
|    4    | [**Exercise 00: Bitcoin Exchange**](#Chapter-4)          |  6   |
|    5    | [**Exercise 01: Reverse Polish Notation 8**](#Chapter-5) |  8   |
|    6    | [**Exercise 02: PmergeMe**](#Chapter-6)                  |  10  |
|    7    | [**Submission and peer-evaluation**](#Chapter-6)         |  13  |

# Chapter 1

## Introduction

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes" (source: [Wikipedia](https://en.wikipedia.org/wiki/C++)).

C++는 C 프로그래밍 언어 또는 "클래스가 있는 C"의 확장으로 Bjarne Stroustrup이 만든 범용 프로그래밍 언어입니다(출처: [위키백과](https://en.wikipedia.org/wiki/C++)).

The goal of these modules is to introduce you to Object-Oriented Programming. This will be the starting point of your C++ journey. Many languages are recommended to learn OOP. We decided to choose C++ since it’s derived from your old friend C. Because this is a complex language, and in order to keep things simple, your code will comply with the C++98 standard.

이 모듈의 목표는 객체 지향 프로그래밍을 소개하는 것입니다. 이것이 C++ 여정의 시작점이 될 것입니다. OOP를 배우기 위해 많은 언어가 권장됩니다. C++는 여러분의 오랜 친구인 C에서 파생된 언어이기 때문에 C++를 선택하기로 결정했습니다. C++는 복잡한 언어이며, 코드를 단순하게 유지하기 위해 C++98 표준을 준수합니다.
We are aware modern C++ is way different in a lot of aspects. So if you want to become a proficient C++ developer, it’s up to you to go further after the 42 Common Core!

최신 C++는 여러 측면에서 많이 다르다는 것을 알고 있습니다. 따라서 능숙한 C++ 개발자가 되고 싶다면 42가지 공통 코어 이후에도 더 발전하는 것은 여러분의 몫입니다!

# Chapter 2

## General rules

### Compiling

- Compile your code with c++ and the flags `-Wall -Wextra -Werror`
- c++로 코드를 작성해야 하며, `-Wall -Wextra -Werror` flags와 함께 컴파일 되어야 합니다.
- Your code should still compile if you add the flag `-std=c++98`
- `-std=c++98` 추가 하더라도 코드는 계속 컴파일 되어야 합니다.

### Formatting and naming conventions

- The exercise directories will be named this way: ex00, ex01, ... , exn
- 연습 문제의 디렉토리는 ex00, ex01, … exn 형태로 작명되어야 합니다.
- Name your files, classes, functions, member functions and attributes as required in
  the guidelines.
- files, classes, functions, member functions 및 attributes는 가이드 라인에 따라 작명되어야 합니다.
- Write class names in UpperCamelCase format. Files containing class code will
  always be named according to the class name. For instance:
  ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you
  have a header file containing the definition of a class "BrickWall" standing for a
  brick wall, its name will be BrickWall.hpp.
- class 이름은 UpperCamelCase 형식으로 작성되어야 합니다. 파일들은 포함하고 있는 class code의 이름을 따라서 작성되어야 합니다. 예를 들어
  ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp.
  만약 벽돌 벽을 나타내는 "BrickWall" 클래스의 정의를 포함하는 헤더 파일이 있다면, 해당 파일의 이름은 BrickWall.hpp 여야 합니다.
- Unless specified otherwise, every output messages must be ended by a new-line
  character and displayed to the standard output.
- 특별히 명시되지 않은 경우, 모든 출력 메시지는 개행 문자로 끝나야 하며 표준 출력에 표시되어야 합니다.
- Goodbye Norminette! No coding style is enforced in the C++ modules. You can
  follow your favorite one. But keep in mind that a code your peer-evaluators can’t
  understand is a code they can’t grade. Do your best to write a clean and readable
  code.
- 잘가, Norminette! C++ 모듈에서는 코딩 스타일을 강제하지 않습니다. 원하는 스타일을 따를 수 있습니다. 그러나 동료 평가자가 이해할 수 없는 코드는 평가할 수 없는 코드입니다. 깨끗하고 읽기 쉬운 코드를 작성하기 위해 최선을 다하세요.

### Allowed/Forbidden

You are not coding in C anymore. Time to C++! Therefore:

더이상 C로 코딩 하지 않습니다. 이제는 C++로! 그대신:

- You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use as much as possible the C++-ish versions of the C functions you are used to.
- 표준 라이브러리에서 거의 모든 것을 사용할 수 있습니다. 따라서 아는 것에 고수하는 대신, 가능한 한 C 함수의 C++ 버전을 사용하는 것이 좋습니다.
- However, you can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.
- 그러나 다른 외부 라이브러리를 사용할 수 없습니다. 이는 C++11 (및 파생 형태) 및 Boost 라이브러리를 사용할 수 없음을 의미합니다. 또한 다음 함수들도 금지됩니다: *printf(), *alloc() 및 free(). 이를 사용하면 점수가 0이 될 것입니다.
- Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42.
- 노트: 명시적으로 다른 방식으로 명시되지 않는 한, using namespace <ns_name> 및 friend 키워드를 사용하는 것은 금지되어 있습니다. 그렇지 않으면, 점수가 -42점이 됩니다.
- You are allowed to use the STL in the Module 08 and 09 only. That means: no Containers (vector/list/map/and so forth) and no Algorithms (anything that requires to include the <algorithm> header) until then. Otherwise, your grade will be -42.
- 모듈 08과 09에서만 STL을 사용할 수 있습니다. 즉, 해당 모듈 이전에는 컨테이너(vector/list/map 등)와 알고리즘(<algorithm> 헤더를 포함하는 모든 것)은 사용할 수 없습니다. 그렇지 않으면 점수가 -42가 됩니다.

### A few design requirements

- Memory leakage occurs in C++ too. When you allocate memory (by using the new keyword), you must avoid memory leaks.
- C++에서도 메모리 누수가 발생합니다. 메모리를 할당할 때 (new 키워드를 사용하여) 메모리 누수를 피해야 합니다.
- From Module 02 to Module 09, your classes must be designed in the **Orthodox Canonical Form, except when explicitely stated otherwise.**
- 모듈 02에서 모듈 09까지, **클래스는 명시적으로 다르게 지정되지 않는 한 Orthodox Canonical 형식으로 설계되어야 합니다.**
- Any function implementation put in a header file (except for function templates) means 0 to the exercise.
- 어떤 함수 구현이 헤더 파일에 들어가 있다면 (함수 템플릿을 제외하고) 이는 문제에 대해 0점을 부여 받습니다.
- You should be able to use each of your headers independently from others. Thus, they must include all the dependencies they need. However, you must avoid the problem of double inclusion by adding include guards. Otherwise, your grade will be 0.
- 각 헤더를 다른 헤더와 독립적으로 사용할 수 있어야 합니다. 따라서 각 헤더는 필요한 모든 종속성을 포함해야 합니다. 그러나 include guards 를 추가하여 중복 포함 문제를 피해야 합니다. 그렇지 않으면 점수가 0점이 될 것입니다.

### Read me

- You can add some additional files if you need to (i.e., to split your code). As these
  assignments are not verified by a program, feel free to do so as long as you turn in
  the mandatory files.
- 필요한 경우 일부 추가 파일을 추가할 수 있습니다(예: 코드를 분할하려는 경우). 이러한 과제들은 프로그램으로 확인되지 않기 때문에 필수 파일만 제출하면 얼마든지 자유롭게 추가할 수 있습니다.
- Sometimes, the guidelines of an exercise look short but the examples can show
  requirements that are not explicitly written in the instructions.
- 때로는 연습 문제의 지침이 간단해 보이지만 예시에서는 명시적으로 지시되지 않은 요구 사항이 나올 수 있습니다.
- Read each module completely before starting! Really, do it.
- 시작하기 전에 각 모듈을 완전히 읽으세요! 정말로, 그렇게 하세요.
- By Odin, by Thor! Use your brain!!!
- 오딘의 이름으로, 토르의 이름으로! 머리를 써보세요!!!

> [!TIP]
> You will have to implement a lot of classes. This can seem tedious, unless you’re able to script your favorite text editor.

> [!TIP]
> 많은 클래스를 구현해야 할 것입니다. 이는 지루해 보일 수 있지만, 좋아하는 텍스트 편집기에서 스크립트를 작성할 수 있다면 더 쉬울 수 있습니다.

> [!NOTE]
> You are given a certain amount of freedom to complete the exercises. However, follow the mandatory rules and don’t be lazy. You would miss a lot of useful information! Do not hesitate to read about theoretical concepts.

> [!NOTE]
> 연습 문제를 완료하기 위해 일정한 자유도가 주어집니다. 그러나 필수 규칙을 따르고 게으르지 않도록 주의하세요. 유용한 정보를 많이 놓치게 될 수 있습니다! 이론적인 개념에 대해 읽어보는 것을 주저하지 마세요.

# Chapter 3

## Module-specific rules

It is mandatory to use the standard containers to perform each exercise in this module.

이 모듈에서 각 연습을 수행하기 위해 표준 컨테이너를 사용하는 것이 필수입니다.

Once a container is used you cannot use it for the rest of the module.

모듈에서 한 번 컨테이너를 사용하면 나머지 모듈에서는 사용할 수 없습니다.

> [!NOTE]
> It is advisable to read the subject in its entirety before doing the exercises.

> [!NOTE]
> 제안드립니다. 연습을 하기 전에 주제를 완전히 읽는 것이 좋습니다.

> [!CAUTION]
> You must use at least one container for each exercise with the exception of exercise 02 which requires the use of two containers.

> [!CAUTION]
> 각 문제마다 하나 이상의 컨테이너를 사용해야 합니다. 단, 2번 문제는 두 개의 컨테이너를 사용해야 합니다.

You must submit a Makefile for each program which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror.

각 프로그램에 대해 제출해야 할 Makefile을 작성해야 합니다. 이 Makefile은 소스 파일을 필요한 출력물로 컴파일하며, -Wall, -Wextra 및 -Werror 옵션을 사용해야 합니다.

You must use c++, and your Makefile must not relink.

c++를 사용해야 하며, Makefile은 relink 해서는 안됩니다.

Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.

Makefile은 최소한의 룰 $(NAME), all, clean, fclean and re 을 포함해야 합니다.

# Chapter 4

## Exercise 00: Bitcoin Exchange

| Exercise 00         | Bitcoin Exchange                               |
| ------------------- | ---------------------------------------------- |
| Turn-in directory   | ex00/                                          |
| Files to turn in    | Makefile, main.cpp, BitcoinExchange.{cpp, hpp} |
| Forbidden functions | None                                           |

You have to create a program which outputs the value of a certain amount of bitcoin
on a certain date.

프로그램을 생성해야 합니다. 이 프로그램은 특정 날짜에 특정 비트코인 잔액을 출력합니다.

This program must use a database in csv format which will represent bitcoin price
over time. This database is provided with this subject.

이 프로그램은 시간에 따른 비트코인 가격을 나타내는 csv 형식의 데이터베이스를 사용해야 합니다. 이 데이터베이스는 이 과제와 함께 제공됩니다.

The program will take as input a second database, storing the different prices/dates
to evaluate

프로그램은 입력으로 다른 가격/날짜를 저장하는 두 번째 데이터베이스를 사용합니다.

Your program must respect these rules:

프로그램은 아래의 룰을 따라야 합니다:

- The program name is btc.
- 프로그램의 이름은 btc 입니다.
- Your program must take a file as argument.
- 프로그램은 파일을 인자로 받아야 합니다.
- Each line in this file must use the following format: "date | value".
- 파일의 매 라인의 다음의 형식: "date | value" 을 사용해야 합니다.
- A valid date will always be in the following format: Year-Month-Day.
- 올바른 날짜은 다음의 형식: Year-Month-Day 을 따라야 합니다.
- A valid value must be either a float or a positive integer, between 0 and 1000.
- 올바른 숫자는 float 또는 positive integer 이며, 0 과 1000 사이여야 합니다.

> [!CAUTION]
> You must use at least one container in your code to validate this exercise. You should handle possible errors with an appropriate error message.

> [!CAUTION]
> 과제에 통과하기 위해서는 한개 이상의 container를 코드에 사용해야 합니다. 가능한 모든 에러와 에러 메시지를 처리해야합니다.

Here is an example of an input.txt file:

다음은 input.txt 파일의 예시 입니다:

```bash
$> head input.txt
date | value
2011-01-03 | 3
2011-01-03 | 2
2011-01-03 | 1
2011-01-03 | 1.2
2011-01-09 | 1
2012-01-11 | -1
2001-42-42
2012-01-11 | 1
2012-01-11 | 2147483648
$>
```

Your program will use the value in your input file.

프로그램은 입력받은 파일의 내용을 사용합니다.

Your program should display on the standard output the result of the value multiplied by the exchange rate according to the date indicated in your database.

프로그램은 표준 출력을 통해 결과를 보여야합니다. 결과 값은 데이터베이스에 표시된 날짜에 따른 환율 입니다.

> [!TIP]
> If the date used in the input does not exist in your DB then you must use the closest date contained in your DB. Be careful to use the lower date and not the upper one.

> [!TIP]
> 만약 입력으로 들어온 날짜가 DB에 없는 경우 DB에 있는 가까운 날짜를 사용합니다. 위쪽 날짜가 아닌 아래쪽 날짜를 사용하도록 주의하세요.

The following is an example of the program’s use.

다음은 프로그램 사용 예시 입니다.

```bash
$> ./btc
Error: could not open file.
$> ./btc input.txt
2011-01-03 => 3 = 0.9
2011-01-03 => 2 = 0.6
2011-01-03 => 1 = 0.3
2011-01-03 => 1.2 = 0.36
2011-01-09 => 1 = 0.32
Error: not a positive number.
Error: bad input => 2001-42-42
2012-01-11 => 1 = 7.1
Error: too large a number.
$>
```

> [!CAUTION]
> Warning: The container(s) you use to validate this exercise will no longer be usable for the rest of this module.

> [!CAUTION]
> 경고: 이 문제에서 사용한 컨테이너는 이 모듈의 나머지 부분에서는 더 이상 사용할 수 없습니다.

