a;main(n,b,c){for(scanf("%d",&n),getchar();a=n--;printf("%s wins.\n",(a+b/9)&1?"Fabre":"Audrey"))for(a=b=-1;(c=getchar())!='\n';a++)b+=c-48;}