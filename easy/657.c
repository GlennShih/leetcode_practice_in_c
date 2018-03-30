bool judgeCircle(char* moves) {
    int x=0;
    int y=0;
    int i;
    
    for(i=0;moves[i]!='\0';i++){
        
        switch(moves[i]){
            case 'U': y++; break;
            case 'D': y--; break;
            case 'R': x++; break;
            case 'L': x--; break;
        }
    }
    
    return x==y&&x==0?true:false;

}