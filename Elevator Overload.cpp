//Code by Abhishek Tiwari
//Hackerearth : https://www.hackerearth.com/@become
//Github :https://github.com/becomeahacker

#include <iostream>

using namespace std;
const int max_size = 1009;
const int max_people = 109;
int weight[max_size];
int people[max_size];
int arr[max_size];
int people_data[max_people];
//int weight_data[max_people];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t-->0){
        int n; cin>>n;
        int max_w,max_p;
        cin>>max_p>>max_w;

        for(int i=1;i<n;++i)
            cin>>arr[i];

        int total_weight = 0; int total_people = 0;

        for(int i=1;i<=n;++i){
            weight[i] = people[i] = 0;
        }
        int result = n; bool flag = false;
        for(int i=1;i<n;++i){
            total_weight -= weight[i];
            total_people -= people[i];

            //weight[i] = 0; people[i] = 0;

            for(int j=1;j<=arr[i];++j){
                cin>>people_data[j];
                ++people[people_data[j]];
                //++total_people;
            }
            total_people += arr[i];
            int data;
            for(int j=1;j<=arr[i];++j){
                cin>>data;
                weight[people_data[j]]+=data;
                total_weight+=data;
            }

            if(!flag && (total_people>max_p || total_weight>max_w))
            {
                result = i;
                flag = true;
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}
