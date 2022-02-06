int karesini_al(int x){
	return x*x;
}

int bes_ekle(int x){
	return x+5;
}

int kup_al(int x){
	return x*x*x;
}

int faktoriyel(int x){
	/*
		x'ten 1'e kadar olan sayıları çarp
	*/
	if(x == 0){
		return 1;
	}

	int faktoriyel;
	
	// While ile açık
	faktoriyel = 1;
	while(x>0){
		faktoriyel *= x;
		x--;
	}

	// While ile daha kısa
	/*
	faktoriyel = 1;
	while(x-- > 0){
		faktoriyel *= x;
	}
	*/

	// For ile açık
	/*
	for(faktoriyel=1; x>0;x--)[
		faktoriyel*=x;
	]
	*/

	// For ile daha kısa
	//for(faktoriyel = 1;x>0; faktoriyel*= x--);

	return faktoriyel;
}