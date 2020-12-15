string reverseWord(string str){
 
  for(int i = 0;i<=(str.length()-1)/2;i++)
 { 
   char a;
   a = str[i];
 str[i] = str[str.length() -  i -1];
 str[str.length() -  i -1] = a  ;
      }
      
  return str;
}
