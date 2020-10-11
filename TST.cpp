#include "TST.h"  
#include "tst_node.h"   

TST_node * insert(word, node = this-> head) {    
	if(head == NULL){    
		TST_node * temp = new TST_node();   
		*temp.set_kleft(word);   
		this-> head = temp;  
		return head;  
	}
	
	if(node == NULL){   
		TST_node * temp = new TST_node();     
		*temp.set_kleft(word); 
		return temp; 
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
				node.set_mid(insert(node.get_mid(), word));     
		}   
		if(word.compare(*node.get_kright_word()) < 0){   
			node.set_right(insert(node.get_right(), word));  
		}  
		if(word.compare(*node.get_kleft_word()) > 0){  
			node.set_left(insert(node.get_left, word));  
		
			
	}   
	return node;
}
