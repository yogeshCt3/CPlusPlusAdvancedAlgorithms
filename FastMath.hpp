#ifndef FASTMATH_HPP
#define FASTMATH_HPP

typedef unsigned long long int  ulli;

ulli _temp;

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

inline void GCD(ulli &_ans, ulli _x, ulli _y){
	// Euclid's 
        _ans = 0;
	if(_y > _x){
		_temp = _x;
		_x = _y;
		_y = _temp;
	}
	while (_y){
		_x %= _y;
		_temp = _x;
		_x = _y;
		_y = _temp;
	}

	_ans = _x;
} 

#endif

