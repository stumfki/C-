std::vector<int> maps(const std::vector<int>& values) {
  std::vector<int> sterke;
  for (int i = 0; i < values.size(); i++) {
    sterke.push_back(values[i] * 2);
    
  }
  return sterke;



}