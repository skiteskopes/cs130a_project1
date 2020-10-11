#include "tst_node.h"  
#include <iostream>      

void inc_kleft(){   
	std::get<1>(this -> kleft) += 1;  
}   

void inc_kright(){  
	std::get<1>(this -> kright) += 1;   
}   

void set_kleft(string word){   
	std::get<0>(this -> kleft) = word;   
	std::get<1>(this -> kleft) = 1;
}  

void set_kright(string word){  
	std::get<0>(this -> kright) = word;   
	std::get<1>(this -> kleft) = 1; 
}  

int get_kleft_count(){   
	return std::get<1>(this -> kleft);     
}   

int get_kright_count(){   
	return std::get<1>(this -> kright);   
}      

std::string get_kleft_word(){    
	return std::get<0>(this -> kleft);   
}    

std::string get_kright_word(){    
	return std::get<0>(this -> kright);    
}     

	



