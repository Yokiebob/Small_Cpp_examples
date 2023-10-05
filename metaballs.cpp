#include <iostream>

char letters[] = "#W$9876543210?!abc;:+=-,._ ";
//letters from most dense to least dense, kind of.

int old = 1;
int i = 1;

float clamp(float a, float b, float c){
	//clamps 'a' between b and c. Didn't use pointers because forgot
	if(a<b){
		return b;
	}
	if(a>c){
		return c;
	}
	return a;
}
float id(float a, float b, float c, float d){
	return 1.0/((a-c)*(a-c)+(b-d)*(b-d));//inverse distance squared. Look up metaballs on wikipedia
}

/**Positions of metaballs. Note how I offset them slightly to avoid dividing by 0**/
float p1x = 20.1;
float p1y = 20.1;
float p2x = 10.1;
float p2y = 10.1;

int main(int argv, char** args){//the parameters are because I have a strange workflow, normally you wouldn't have those
	for(int i = 0; i < 40; i++){//40 high
		std::cout << std::endl;
		for(int k = 0; k < 40; k++){//40 wide
			float uv = 0;//this variable name is probably innacurate
			uv+=id(p1x,p1y,i,k);
			uv+=id(p2x,p2y,i,k);//add both distances...
			char b = letters[27-int(clamp((uv*90.0),0,27))];//on my prompt the text is half as widw as tall, so I output it twise.
			std::cout<<b<<b;
		}
	}
	return 0;
}
