#ifndef TSTNODE_H 
#define TSTNODE_H 

class TST_node {  

public:   
	TST_node(); 
	~TST_node();   
	void inc_kleft();  
	void inc_kright();    
	int get_kleft_count();   
	int get_kright_count();   
	std::string get_kleft_word();  
	std::string get_kright_word();   
	bool kleft_status();   
	bool kright_status();    

private:
	std::tuple<std::string, int> kleft;  
	std::tuple<std::string, int> kright;
	TST_node *left; 
	TST_node *right; 
	TST_node *mid;  

};


#endif
