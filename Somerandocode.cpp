	map<string, double*> 
  
  myMap = map<string, double*>();
	double* aaaaa = new double[4];
	memset(aaaaa, 0, 4 * sizeof(double));
	for (int i = 0; i < 4; i++) 
  aaaaa[i] = i;
	myMap.insert(pair<string, double*>("aaa", aaaaa));
	//aaaaa[2] = 0;
	delete[] aaaaa;
	map<string, double*>::iterator iter;
	iter = myMap.find("aaa");
	if (iter != myMap.end()) {
		double* aaa = iter->second;
		for (int i = 0; i < 4; i++) cout << aaa[i] << ", ";
		cout << endl;
	}
