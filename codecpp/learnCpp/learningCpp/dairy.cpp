#include<iostream>
using namespace std;
void start();
void end();
int main(){
	int d;
	int dr;
	cout<<"____________welcome________________"<<endl;
	cout<<"    press 5 to start the  game: ";
	cin>>d;
	if(d==5){
		start();
	}
	else{
		cout<<"try again";
	}
	end();
	return 0;
}
void end(){
	int dr;
	cout<<"\npress any number to exit ";
	cin>>dr;
}

void start(){
	char a;
	int rp;
	int score=0;
	cout<<"\n"<<" Which region of the alimentary canal absorbs the digested food? "<<endl;
	cout<<"A. Stomach"<<endl;
	cout<<"B.  Small intestine"<<endl;
	cout<<"C. Large intestine"<<endl;
	cout<<"D. Liver"<<endl;
	cin>>a;
	if(a=='b'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			
			cout<<"\nB.  Small intestine "<<endl;
	}
	
	cout<<"\n"<<" Who was the first Man to Climb Mount Everest Without Oxygen? "<<endl;
	cout<<"A. Junko Tabei"<<endl;
	cout<<"B. Reinhold Messner"<<endl;
	cout<<"C. Peter Habeler"<<endl;
	cout<<"D. Phu Dorji"<<endl;
	cin>>a;
	if(a=='d'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"D. Phu Dorji ";
 	 	}
 	cout<<"\n"<<" Who built the Jama Masjid? "<<endl;
	cout<<"A. Jahangir"<<endl;
	cout<<"B. Akbar"<<endl;
	cout<<"C. Imam Bukhari"<<endl;
	cout<<"D. Shah Jahan"<<endl;
	cin>>a;
	if(a=='d'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"D. Shah Jahan"<<endl;
		
 	}
 	cout<<"\n"<<" Who wrote the Indian National Anthem? "<<endl;
	cout<<"A. Bakim Chandra Chatterji"<<endl;
	cout<<"B. Rabindranath Tagore"<<endl;
	cout<<"C. Swami Vivekanand"<<endl;
	cout<<"D. Shah Jahan"<<endl;
	cin>>a;
	if(a=='b'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"B. Rabindranath Tagore ";
		}
 	
 	cout<<"\n"<<" Who was the first Indian Scientist to win a Nobel Prize? "<<endl;
	cout<<"A. CV Raman"<<endl;
	cout<<"B. Amartya Sen"<<endl;
	cout<<"C. Hargobind Khorana"<<endl;
	cout<<"D. Subramanian Chrandrashekar"<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"A. CV Raman ";
		}
 	
 	cout<<"\n"<<" Who was the first Indian in space? "<<endl;
	cout<<"A. Vikram Ambalal"<<endl;
	cout<<"B.Ravish Malhotra"<<endl;
	cout<<"C. Rakesh Sharma"<<endl;
	cout<<"D. Nagapathi Bhat"<<endl;
	cin>>a;
	if(a=='c'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"C. Rakesh Sharma"<<endl;
		
	}
 	cout<<"\n"<<" Who is the first Indian to win a Nobel Prize? "<<endl;
	cout<<"A. Rabindranath Tagore"<<endl;
	cout<<"B. CV Raman"<<endl;
	cout<<"C. Mother Theresa"<<endl;
	cout<<"D. Hargobind Khorana"<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		cout<<"\nA. Rabindranath Tagore ";
 	}
 	
 	cout<<"\n"<<" Who was the first President of India? "<<endl;
	cout<<"A. Abdul Kalam"<<endl;
	cout<<"B. Lal Bahadur Shastri"<<endl;
	cout<<"C. Dr. Rajendra Prasad"<<endl;
	cout<<"D. Zakir Hussain"<<endl;
	cin>>a;
	if(a=='c'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"C. Dr. Rajendra Prasad "<<endl;
		
 	}
 	cout<<"\n"<<"Who was the first Indian to win the Booker Prize? "<<endl;
	cout<<"A. Dhan Gopal Mukerji"<<endl;
	cout<<"B. Nirad C. Chaudhuri"<<endl;
	cout<<"C. Arundhati Roy"<<endl;
	cout<<"D. Aravind Adiga"<<endl;
	cin>>a;
	if(a=='c'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		cout<<"if you want to see correct answer press 1 "<<endl;
		cin>>rp;
		if(rp==1){
			cout<<"correct answer is  ";
			cout<<"C. Arundhati Roy"<<endl;
		}
 	}
 	cout<<"\n"<<" Which of the following are energy foods? "<<endl;
	cout<<"A. Carbohydrates and fats"<<endl;
	cout<<"B. Proteins and mineral salts"<<endl;
	cout<<"C. Vitamins and minerals"<<endl;
	cout<<"D. Water and roughage"<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"A.  Carbohydrates and fats"<<endl;
		}
 	
 	cout<<"\n"<<"8. Who was the first Indian woman to win the Miss World Title? "<<endl;
	cout<<"A. Aishwarya Rai"<<endl;
	cout<<"B. Sushmita Sen"<<endl;
	cout<<"C. Reita Faria"<<endl;
	cout<<"D. Diya Mirza"<<endl;
	cin>>a;
	if(a=='c'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"C. Reita Faria "<<endl;
		}
 	
 	
 	cout<<"\n"<<" The mode of nutrition found in fungi is: "<<endl;
	cout<<"A. Parasitic nutrition"<<endl;
	cout<<"B. Holozoic nutrition"<<endl;
	cout<<"C. Autotrophic nutrition"<<endl;
	cout<<"D. Saprotrophic nutrition"<<endl;
	cin>>a;
	if(a=='d'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"D. Saprotrophic nutrition "<<endl;
		
	}
	cout<<"\n"<<"  Roots of the plants absorb water from the soil through the process of:"<<endl;
	cout<<"A.diffusion"<<endl;
	cout<<"B. transpiration"<<endl;
	cout<<"C.osmosis"<<endl;
	cout<<"D. None of these"<<endl;
	cin>>a;
	if(a=='c'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"C. osmosis"<<endl;
		}
	cout<<"\n"<<"  The site of photosynthesis in the cells of a leaf i"<<endl;
	cout<<"A. chloroplast"<<endl;
	cout<<"B. mitochondria"<<endl;
	cout<<"C. cytoplasm"<<endl;
	cout<<"D. protoplasm"<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"A. chloroplast "<<endl;
		}
	
	cout<<"\n"<<"In which mode of nutrition an organism de-rives its food from the body of another living organism without killing it? "<<endl;
	cout<<"A. Saprotrophic nutrition"<<endl;
	cout<<"B. Parasitic nutrition"<<endl;
	cout<<"C. Holozoic nutrition"<<endl;
	cout<<"D. Autotrophic nutrition"<<endl;
	cin>>a;
	if(a=='b'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"B. Parasitic nutrition "<<endl;
		}
 	cout<<"\n"<<"In amoeba, food is digested in the:"<<endl;
	cout<<"A. food vacuole"<<endl;
	cout<<"B. mitochondria"<<endl;
	cout<<"C. pseudopodia"<<endl;
	cout<<"D. chloroplast"<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"A. food vacuole "<<endl;
	}
	
	cout<<"\n"<<" The contraction and expansion movement of the walls of the food pipe is called: "<<endl;
	cout<<"A. translocation"<<endl;
	cout<<"B. transpiration"<<endl;
	cout<<"C. peristaltic movement"<<endl;
	cout<<"D. digestion"<<endl;
	cin>>a;
	if(a=='c'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"C. peristaltic movement"<<endl;
		}
	
	cout<<"\n"<<" The exit of unabsorbed food material is regu-lated by"<<endl;
	cout<<"A. liver"<<endl;
	cout<<"B. anus"<<endl;
	cout<<"C. small intestine"<<endl;
	cout<<"D. anal sphincter"<<endl;
	cin>>a;
	if(a=='d'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
			cout<<"D. anal sphincter "<<endl;
		}
	
	cout<<"\n"<<" Magnesium ribbon is rubbed before burning because it has a coating of "<<endl;
	cout<<"A. basic magnesium carbonate"<<endl;
	cout<<"B. basic magnesium oxide"<<endl;
	cout<<"C. basic magnesium sulphide"<<endl;
	cout<<"D. basic magnesium chloride"<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
			cout<<"A. basic magnesium carbonate "<<endl;
		}
	
	cout<<"\n"<<"  Which of the following statement marks as a difference between plant cell and animal cell?"<<endl;
	cout<<"A. Plant cells have cell wall which animal cells do not."<<endl;
	cout<<"B.  Plant cells do not have vacuole while animal cells do have."<<endl;
	cout<<"C. Plant cells have only cell membrane while animal cells have both cell wall as well as cell membrane. "<<endl;
	cout<<"D.  Plant cells have more plastids while animal cells have few plastids"<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"A. Plant cells have cell wall which animal cells do not "<<endl;
		}
	
	cout<<"\n"<<"  One of the following processes does not involve a chemical reaction. That is:"<<endl;
	cout<<"A.  Melting of candle wax when heated"<<endl;
	cout<<"B.  Burning of candle wax when heated"<<endl;
	cout<<"C.  Digestion of food in our stomach"<<endl;
	cout<<"D.  Ripening of banana"<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"A.  Melting of candle wax when heated "<<endl;
		}
	
	cout<<"\n"<<"Who was the first Indian woman in Space?  "<<endl;
	cout<<"A. Kalpana Chawla "<<endl;
	cout<<"B. Sunita Williams"<<endl;
	cout<<"C.  Koneru Humpy"<<endl;
	cout<<"D. None of the above"<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"A. Kalpana Chawla"<<endl;
		}
	
	cout<<"\n"<<"  It is necessary to balance a chemical equation in order to satisfy the law of:"<<endl;
	cout<<"A. Conservation of motion"<<endl;
	cout<<"B. Conservation of momentum"<<endl;
	cout<<"C. Conservation of energy"<<endl;
	cout<<"D. Conservation of mass"<<endl;
	cin>>a;
	if(a=='d'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"D.Conservation of mass "<<endl;
		}
	
	cout<<"\n"<<" The non-metal which is liquid at room temperature is:"<<endl;
	cout<<"A. Mercury"<<endl;
	cout<<"B. Bromine"<<endl;
	cout<<"C. Carbon"<<endl;
	cout<<"D. Helium"<<endl;
	cin>>a;
	if(a=='b'){
		cout<<"'correct answer' "<<endl;
		cout<<"Explanation: Bomine is the only non-metal which exists as a liquid at room temperature."<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"B. Bromine "<<endl;
			cout<<"Explanation: Bomine is the only non-metal which exists as a liquid at room temperature."<<endl;
		
	}
	cout<<"\n"<<" Which one of the following gases has the highest solubility in water? "<<endl;
	cout<<"A. Chlorine"<<endl;
	cout<<"B. Ammonia"<<endl;
	cout<<"C. Carbon dioxide"<<endl;
	cout<<"D. Nitrogen"<<endl;
	cin>>a;
	if(a=='b'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
			cout<<"B. Ammonia "<<endl;
		
	}
	cout<<"\n"<<" Who discovered the electron? "<<endl;
	cout<<"A. Rutherford"<<endl;
	cout<<"B. Chadwick"<<endl;
	cout<<"C. Thomson "<<endl;
	cout<<"D. Goldstein "<<endl;
	cin>>a;
	if(a=='c'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
			cout<<"C. Thomson "<<endl;
		
	}
	
	cout<<"\n"<<" What was the source of alpha particles in Rutherford scattering experiment? "<<endl;
	cout<<"A. Hydrogen nucleus"<<endl;
	cout<<"B. Argon nucleus"<<endl;
	cout<<"C. Helium nucleus "<<endl;
	cout<<"D. Boron "<<endl;
	cin>>a;
	if(a=='c'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		cout<<"C. Helium nucleu "<<endl;
		
	}
	cout<<"\n"<<" Which isotope is used in the nuclear power plants to generate electricity? "<<endl;
	cout<<"A. Uranium 235"<<endl;
	cout<<"B. Iodine 131"<<endl;
	cout<<"C. Cobalt 60 "<<endl;
	cout<<"D. Uranium 238 "<<endl;
	cin>>a;
	if(a=='a'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"A. Uranium 235 "<<endl;
		}
	
	cout<<"\n"<<" What property of an element determines its chemical behaviour? "<<endl;
	cout<<"A. Size of an element"<<endl;
	cout<<"B. Valency of an element"<<endl;
	cout<<"C. Molar mass of the element"<<endl;
	cout<<"D. None of these "<<endl;
	cin>>a;
	if(a=='b'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
			cout<<"B. Valency of an element "<<endl;
		}
	cout<<"\n"<<" Which of the following does not match the characteristics of an Isotope? "<<endl;
	cout<<"A.  Isotopes of some elements are radioactive "<<endl;
	cout<<"B.  Isotopes are the atoms of different elements"<<endl;
	cout<<"C.  Isotopes differ in number of neutrons"<<endl;
	cout<<"D.  Isotopes have similar chemical properties"<<endl;
	cin>>a;
	if(a=='b'){
		cout<<"'correct answer' "<<endl;
		score++;
	}
	else{
		cout<<"wrong answer "<<endl;
		
			cout<<"B.  Isotopes are the atoms of different elements "<<endl;
		}
	if(score>25||score==30){
		cout<<"Brillient"<<endl;
	}
	else if(score>15){
		cout<<"Good"<<endl;
	}
	else{
		cout<<"you fail"<<endl;
	}
 	cout<<"your score: "<<score<<"/30";
}
