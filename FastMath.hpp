#ifndef FASTMATH_HPP
#define FASTMATH_HPP

typedef unsigned long long int  ulli;

using namespace std;

inline void fastExp(ulli &_ans, ulli _base, ulli _exp){
	//	to compute _base ^ _exp	
	// 	Binary Exponentation O ( log _exp ) 
	_ans = 1;
	while (_exp){
		if(_exp & 1){
			_ans *= _base;
		}
		_base *= _base;
		_exp >>= 1;				
	}		
}                          


inline void fastExpWithMod(ulli &_ans, ulli _base, ulli _exp, ulli _mod){
	//	to compute (_base ^ _exp) % _mod	
	// 	Binary Exponentation O ( log _exp ) 
	_ans = 1;
	while (_exp){
		if(_exp & 1){
			_ans *= _base;
			if(_ans >= _mod)
				_ans %= _mod;
		}
		_base *= _base;
		if(_base >= _mod)
			_base %= _mod;
		_exp >>= 1;				
	}		
}                          


#endif

