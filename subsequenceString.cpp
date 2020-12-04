/*
s1 = "oslas"

s2 = "loslakers"
      -....---.
      
      


*/

bool solve(string s1, string s2) {
    int l1 = s1.size();
    int l2 = s2.size();
    
    int i=0; int j = 0;
    
    int confirmed = 0;
    
    if(l1>l2){
        return false;
    }
    while(i < l1 || j < l2){
        if(s1[i] == s2[j]){
            i++;
            j++;
            confirmed++;
        }
        else{
            j++;
        }
    }
    return confirmed == l1;
    
}