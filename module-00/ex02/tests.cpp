// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.class.hpp"

int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t;
	// accounts 정보를 담고 있는 Vertor type
	typedef std::vector<int>								  ints_t;
	// indexs 담고 있는 type
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;
	// ints_t와 accounts_t와 1대 1 매칭 시켜서 사용 하게 하는 type

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	// 잔액을 담는 list 변수
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	// 계정 갯수를 담고 있는 변수
	accounts_t				accounts( amounts, amounts + amounts_size );
	// 계정에 대한 vector 생성, 초기 값으로 시작과, 끝을 전달.
	accounts_t::iterator 	acc_begin	= accounts.begin();
	// 계정의 시작
	accounts_t::iterator 	acc_end		= accounts.end();
	// 계정의 끝

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	// 예금 정보를 담고 있는 list 변수
	size_t const		d_size( sizeof(d) / sizeof(int) );
	// 예금 정보를 담고 있는 list 변수
	ints_t				deposits( d, d + d_size );
	// 예금 백터
	// [19920104_091532] index:0;amount:42;created
	// [19920104_091532] index:1;amount:54;created
	// [19920104_091532] index:2;amount:957;created
	// [19920104_091532] index:3;amount:432;created
	// [19920104_091532] index:4;amount:1234;created
	// [19920104_091532] index:5;amount:0;created
	// [19920104_091532] index:6;amount:754;created
	// [19920104_091532] index:7;amount:16576;created
	ints_t::iterator 	dep_begin	= deposits.begin();
	// 예금 백터 시작
	ints_t::iterator 	dep_end		= deposits.end();
	// 예금 백터 시작

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	// 인출 금 정보
	size_t const		w_size( sizeof(w) / sizeof(int) );
	// 인출 금 정보 사이즈
	ints_t				withdrawals( w, w + w_size );
	// 인출 금 백터
	ints_t::iterator 	wit_begin	= withdrawals.begin();
	// 인출 금 백터 시작
	ints_t::iterator 	wit_end		= withdrawals.end();
	// 인출 금 백터 끝

	Account::displayAccountsInfos();
	// 생성된 계정 정보 출력
	// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	// 계정 상태 출력
	// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	// [19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
	// [19920104_091532] index:2;amount:957;deposits:0;withdrawals:0
	// [19920104_091532] index:3;amount:432;deposits:0;withdrawals:0
	// [19920104_091532] index:4;amount:1234;deposits:0;withdrawals:0
	// [19920104_091532] index:5;amount:0;deposits:0;withdrawals:0
	// [19920104_091532] index:6;amount:754;deposits:0;withdrawals:0
	// [19920104_091532] index:7;amount:16576;deposits:0;withdrawals:0

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}
	// 예금 정보에 담긴 정보를 토대로 예금
	// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	// [19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
	// [19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
	// [19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
	// [19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
	// [19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
	// [19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
	// [19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1

	Account::displayAccountsInfos();
	// 생성된 계정 정보 출력
	// [19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	// 계정 상태 출력
	// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
	// [19920104_091532] index:1;amount:819;deposits:1;withdrawals:0
	// [19920104_091532] index:2;amount:1521;deposits:1;withdrawals:0
	// [19920104_091532] index:3;amount:434;deposits:1;withdrawals:0
	// [19920104_091532] index:4;amount:1321;deposits:1;withdrawals:0
	// [19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
	// [19920104_091532] index:6;amount:763;deposits:1;withdrawals:0
	// [19920104_091532] index:7;amount:16596;deposits:1;withdrawals:0

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}
	// 출금 정보에 담긴 정보를 토대로 출금
	// [19920104_091532] index:0;p_amount:47;withdrawal:refused
	// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	// [19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
	// [19920104_091532] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
	// [19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
	// [19920104_091532] index:5;p_amount:23;withdrawal:refused
	// [19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
	// [19920104_091532] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1

	Account::displayAccountsInfos();
	// [19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
	// [19920104_091532] index:1;amount:785;deposits:1;withdrawals:1
	// [19920104_091532] index:2;amount:864;deposits:1;withdrawals:1
	// [19920104_091532] index:3;amount:430;deposits:1;withdrawals:1
	// [19920104_091532] index:4;amount:1245;deposits:1;withdrawals:1
	// [19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
	// [19920104_091532] index:6;amount:106;deposits:1;withdrawals:1
	// [19920104_091532] index:7;amount:8942;deposits:1;withdrawals:1
	return 0;
	// Acount의 destructor 작동.
	// [19920104_091532] index:0;amount:47;closed
	// [19920104_091532] index:1;amount:785;closed
	// [19920104_091532] index:2;amount:864;closed
	// [19920104_091532] index:3;amount:430;closed
	// [19920104_091532] index:4;amount:1245;closed
	// [19920104_091532] index:5;amount:23;closed
	// [19920104_091532] index:6;amount:106;closed
	// [19920104_091532] index:7;amount:8942;closed
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// My boss is a dick                                                          //
// ************************************************************************** //
