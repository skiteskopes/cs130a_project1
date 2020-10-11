#include "TST.h"  
#include "tst_node.h"   

void insert(word, node = this-> head) {   
	if (!(*head)){ 
        	head = new TST_node();   
		head.set_kleft(word); 
	}                 
	if(node == NULL){   
		TST_node * temp = new TST_node();     
		*temp.set_kleft(word); 
		return temp 
	}  
	
	if(!*node.kleft_status() && *node.kright_status()){   
		if(word.compare(*node.get_kright_word()) > 0){   
			node.set_kleft(word);		
		}  
		else if(word.compare(*node.get_kright_word()) < 0){
			int temp = node.get_kright_count();   
			string wordtemp = node.get_kright_value();   
			node.set_kright(word);    
			node.set_kleft(wordtemp);  
			node.set_kleft_count(temp);  
		}   
		else if(word.compare(*node.get_kright_word()) == 0){   
			node.inc_kright();  
		}	
	}   
	
	elif(*node.kleft_status() && !*node.kright_status()){      
		if(word.compare(*node.get_kleft_word()) < 0){   
			node.set_kright(word);   	
		}    
		else if(word.compare(*node.get_kleft_word()) > 0){     
			int temp = node.get_kleft_count();   
			string wordtemp = node.get_kleft_value();      
			node.set_kleft(word);  
			node.set_kright(wordtemp);  
			node.set_kright_count(temp);      
		}   
		else if(word.compare(*node.get_kleft_word()) == 0){   
			node.inc_kleft();      
		}
	}   
		
	elif(*node.kleft_status() && *node.kright_status()){   
		if(word.compare(*node.get_kright_word()) < 0 && word.compare(*node.get_kleft_word()) > 0){   
				insert(node.get_mid(), word);     
		}   
		if(word.compare(*node.get_kright_word()) < 0){   
			insert(node.get_right, word);  
		}  
		if(word.compare(*node.get_kleft_word()) > 0){  
			insert(node.get_left, word);  
		
			
	}
}
