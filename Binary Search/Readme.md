- find the first and last occurance of an element.

vector<int> v = { 2, 4, 10, 10, 10, 18, 20 };
  
freq = upper_bound(v.begin(), b.end(), 10) - lower_bound(v.begin(), b.end(), 10);
