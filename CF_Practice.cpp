#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int masuk;
    cin >> masuk;
    vector<int> node;
    vector<vector<int>> vertex, done;
    bool cycle = false;
    int temp = 0,foruni = 0,totalweight = 0;

    for (int x = 0; x < masuk; x++){
        int bobot, kiri, kanan;
        cin >> bobot >> kiri >> kanan;
        vector<int> mas = {bobot,kiri,kanan};
        vertex.push_back(mas);
    }
    sort(vertex.begin(),vertex.end());

    cout << "\nSorted list:\n";

    for(int x = 0; x < masuk; x++){
        cout << vertex[x][0] << ' ' << vertex[x][1] << ' ' << vertex[x][2] << endl;
    }

    cout << "\nEdges terhubung:\n";

    for(int x = 0; x < masuk; x++){
        int kiri = vertex[x][1], kanan = vertex[x][2];
        int adakiri = 0, adakanan = 0, temp = 0;
        for (int y = 0; y < done.size(); y++){
            int adakirsam = 0, adakansam = 0;
            for (int z = 0; z < done[y].size(); z++){
                if (done[y][z] == kiri){
                    adakiri = 1;
                    adakirsam = 1;
                }
                if (done[y][z] == kanan){
                    adakanan = 1;
                    adakansam = 1;
                }
                if (adakirsam == 1 && adakansam == 1){
                    adakiri = 3;
                    adakanan = 3;
                    break;
                }
            }
        }
        if (adakiri == 0 && adakanan == 0){
            cout << kiri << " - " << kanan << endl;
            totalweight += vertex[x][0];
            vector<int> cek = {kiri,kanan};
            done.push_back(cek);
        }
        else if(adakiri == 1 && adakanan == 0){
            cout << kiri << " - " << kanan << endl;
            totalweight += vertex[x][0];
            for(int a = 0; a < done.size(); a++){
                for(int b = 0; b < done[a].size(); b++){
                    if (done[a][b] == kiri){
                        done[a].push_back(kanan);
                    }
                }
            }
        }
        else if(adakiri == 0 && adakanan == 1){
            cout << kiri << " - " << kanan << endl;
            totalweight += vertex[x][0];
            for(int a = 0; a < done.size(); a++){
                for(int b = 0; b < done[a].size(); b++){
                    if (done[a][b] == kanan){
                        done[a].push_back(kiri);
                    }
                }
            }
        }
        else if(adakiri == 1 && adakanan == 1){
            cout << kiri << " - " << kanan << endl;
            totalweight += vertex[x][0];
            for(int a = 0; a < done.size(); a++){
                for(int b = 0; b < done[a].size(); b++){
                    if(done[a][b] == kiri){
                        temp = a;
                    }
                    if(done[a][b] == kanan){
                        foruni = a;
                    }
                }
            }
            for (int a = 0; a < done[foruni].size(); a++){
                done[temp].push_back(done[foruni][a]);
            }
            done[foruni].clear();
        }
        else continue;
    }
    cout << "Total bobot : " << totalweight;
}