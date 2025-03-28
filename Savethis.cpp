using namespace std;

   string MineType(string vertical, string horizontal){

   string answer;

   if(vertical > horizontal)
    answer = vertical;
   else if(vertical < horizontal)
    answer = horizontal;

    return answer;
}