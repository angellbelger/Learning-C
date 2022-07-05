int menor, maior, meio;
    menor = 0;
    maior = tam-1;
    while (menor <= maior){
       meio = (menor + maior)/2;
       if (arg == vec[meio]){
            return(meio);
        }
        if(arg < vec[meio]){
            maior = meio - 1;
        }
       else {
          menor = meio + 1;
       }
    }
    return(-1);
}