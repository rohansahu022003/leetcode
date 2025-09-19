class Spreadsheet {
    vector<vector<int>>sheet;

public:
    Spreadsheet(int rows) {
        sheet.resize(rows+1,vector<int>(26,0));
    }
    
    void setCell(string cell, int value) {
        int c=cell[0]-'A';
        string num="";
        num=cell.substr(1);
        int r=stoi(num);
        sheet[r][c]=value;
    }
    
    void resetCell(string cell) {
         int c=cell[0]-'A';
        string num="";
       num=cell.substr(1);
        int r=stoi(num);
        sheet[r][c]=0;
    }
    
    int getValue(string formula) {
        string newa="";
        string newb="";
        int a,b,n;
        for(int i=0; i<formula.size(); i++){
            if(formula[i]=='+')n=i;
        }
        newa=formula.substr(1,n-1);
        newb=formula.substr(n+1,formula.size()-n);
        
        if(isdigit(newa[0])){
                a=stoi(newa);
        }
        
    else{
        int c=newa[0]-'A';
        string num="";
       num=newa.substr(1);
        int r=stoi(num);
        a=sheet[r][c];
            }
           
        if(isdigit(newb[0])){
            b=stoi(newb);
        }
        else{
        int c=newb[0]-'A';
        string num="";
       num=newb.substr(1);
        int r=stoi(num);
             b=sheet[r][c];
            }
       
return a+b;
        

       
    }
};