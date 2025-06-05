int main(){
    int m[5] = {0, 1, 2, 3, 4};
    int m2[4];

    for(int i=0; i<4; i++){
        m2[i] = i + m[4-i];
    }
    for(int i=0; i<4; i++){
        printf("%d", m2[m[i]]);
    }

}