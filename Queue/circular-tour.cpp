/*This is a function problem.You only need to complete the function given below*/
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/
/*You are required to complete this method*/
int tour(petrolPump p[],int n)
{
   //Your code here
   int start = 0;
   int end = 1;
   
   int currentPetrol = p[start].petrol - p[start].distance;
   
   while( start != end || currentPetrol < 0)
   {
       while(currentPetrol < 0 && start != end)
       {
           currentPetrol = currentPetrol - (p[start].petrol - p[start].distance);
           start = start + 1;
           start = start % n;
           
           if (start == 0)
            return -1;
       }
       
       currentPetrol = currentPetrol + p[end].petrol - p[end].distance;
       
       end = end + 1;
       end = end % n;
   }
   
   return start;
}
