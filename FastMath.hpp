#ifndef FASTMATH_HPP
#define FASEMATH_HPP

#include <iostream>
using ulli = unsigned long long int;
using namespace std;
inline void fastExponentialWithModulo(ulli _base, ulli _exp, const ulli _mod){
	ulli _ans = 1;
	while(_exp){
		if(_exp & 1){ 	//~~> exponential power is odd
			_ans *= _base;
			if ( _ans >= _mod ) 
				_ans %= _mod;	//~~> if term increases the mod then replace with the remainder 
		}
		_base *= _base;
		if( _base >= _mod )
			_base %= _mod;	//~~> if term increases the mod then replace with the remainder
		_exp >>= 1; 	//~~> divide the exponential power by 2
		
	}	
	cout << _ans << '\n';
}


inline void fastExponential(ulli _base, ulli _exp){
	ulli _ans = 1;
	while(_exp){
		if(_exp & 1){ 	//~~> exponential power is odd
			_ans *= _base;
		}
		_base *= _base;
		_exp >>= 1; 	//~~> divide the exponential power by 2
		
	}	
	cout << _ans << '\n';
}


#endif





