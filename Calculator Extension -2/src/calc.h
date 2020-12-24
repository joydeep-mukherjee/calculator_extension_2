//no change to this file
#ifndef CALC_H_
#define CALC_H_


template <class T>
class Calc {
	int number_of_inputs;
public:
	Calc(int val);
	void calculate();
	void print(T num);
};



#endif /* CALC_H_ */
