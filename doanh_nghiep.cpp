#include<bits/stdc++.h>
using namespace std;
struct DoanhNghiep{
    string MaDN, TenDN;
    int nguoi;
};
int main(){
    DoanhNghiep ds[1000];
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, ds[i].MaDN);
        getline(cin, ds[i].TenDN);
        cin >> ds[i].nguoi;
    }
    int q, a[100], b[100];
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ds[i].nguoi < ds[i].nguoi){
                struct DoanhNghiep tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
        }
    }
    for(int i=0; i<q; i++){
        for(int j=0; j<n; j++)
    }
}



/*
#include<bits/stdc++.h>
using namespace std;
class DN{
	private:
		string ma, ten;
		int sl;
	public:
		void nhap(){
			cin >> ma;
			cin.ignore();
			getline(cin, ten);
			cin >> sl;
		}
		void in(){
			cout << ma << " " << ten << " " << sl << endl;
		}
		string getma(){
			return ma;
		}
		int getsl(){
			return sl;
		}
};
 
bool cmp(DN a, DN b){
	if(a.getsl() != b.getsl())
		return a.getsl() > b.getsl();
	return a.getma() < b.getma();
}
 
int main(){
	int n; cin >> n;
	DN a[n];
	for(int i = 0; i < n; i++) a[i].nhap();
	sort(a, a + n, cmp);
	int q; cin >> q;
	while(q--){
		int x, y; cin >> x >> y;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " << y << " SINH VIEN:\n";
		for(DN xx : a){
			if(xx.getsl() >= x && xx.getsl() <= y){
				xx.in();
			}
		}
	}
	return 0;
}

*/