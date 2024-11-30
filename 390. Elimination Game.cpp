   int step=1,reamin=n,head=1;

    bool left =true;


    while(reamin>1){


        if(left or (reamin&1)){
            head=head+step;
        }
        step*=2;
        reamin/=2;
        left=!left;
    }
    cout<<head<<nl;
