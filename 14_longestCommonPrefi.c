//2022年01月18日更新，完成
char * longestCommonPrefix(char ** strs, int strsSize){
    unsigned int n = strlen(strs[0]);//把字符串数组的第一个子串内容当作最长前缀的初始项,之后遍历后续子串，拿第一个字符串去进行匹配
    char* zc = malloc(sizeof(char)*(n+1));
    for(int i = 0; i<n; i++)//公共前缀赋初始值
    zc[i] = (strs[0])[i];//循环主体，逐个比较字符串内各元素
    zc[n] = '\0';
    for(int i = 1; i<strsSize;i++){//从第2个字符串开始向后扫描，遍历全部字符串
        int j = 0;
        for(; zc[j]!='\0' && (strs[i])[j]!='\0'; j++)//对于每一个当前比较的字符串，如果当前的zc位不等于str当前比较的字符串的位，则将zc后续全部置空
            if(zc[j] != (strs[i])[j])  zc[j] = '\0';
        if(zc[j]!='\0' && (strs[i])[j]=='\0') zc[j] = '\0';
    }
    return zc;
}
int main(){
    char* arr1 = "abcdefg";
    char* arr2 = "a";
    char* arr3 = "a";//字符串在C中的声明必须得用双引号
    char* arr[3] = {arr1, arr2, arr3};//字符串数组指针声名
    char* zc = longestCommonPrefix(arr,3);
    printf("1= %s, 2= %s,3= %s \n zc = %s\n",arr1,arr2,arr3,zc);
    return 0;
}


//2022年01月17日更新，更新字符串型数组指针的写法，纠正了子函数内字符串数组指针的引用
char * longestCommonPrefix(char ** strs, int strsSize){
    unsigned int n = strlen(strs[0]);//把字符串数组的第一个子串内容当作最长前缀的初始项,之后遍历后续子串，拿第一个字符串去进行匹配、
    printf("n = %d\n",n);
    char* zc = malloc(sizeof(char)*(n+1));
    int i =0;
    for(; i<n; i++)
    zc[i] = (strs[1])[i];//循环主体，逐个比较字符串内各元素
    zc[i] = '\0';
    return zc;
}

int main(){
    char* arr1 = "abcdefg";
    char* arr2 = "hijklm";
    char* arr3 = "opqes";//字符串在C中的声明必须得用双引号
    char* arr[3] = {arr1, arr2, arr3};//字符串数组指针声名
    char* zc = longestCommonPrefix(arr,3);
    printf("1= %s, 2= %s,3= %s \n zc = %s\n",arr1,arr2,arr3,zc);
    return 0;
}
    


//2022年01月16日更新，还没测试好测试环境，刚好可以借这个题来练一下指针数组和C语言的字符串处理，慢慢来，加油
char * longestCommonPrefix(char ** strs, int strsSize){
    unsigned int n = strlen(strs[1]);//把字符串数组的第一个子串内容当作最长前缀的初始项,之后遍历后续子串，拿第一个字符串去进行匹配
    char* zc = malloc(sizeof(char)*(n+1));
    int i =0;
    for(; i<n; i++)
    zc[i] = (strs[1])[i];//循环主体，逐个比较字符串内各元素
    zc[i] = '\0';
    return zc;
}

int main(){
    char* arr1 = 'abcdefg';
    char* arr2 = 'hijklmn';
    char* arr3 = 'opqest';
    char* arr[3] = {&arr1, &arr2, &arr3};
    char* zc = longestCommonPrefix(arr,3);
    printf("a= %s, 2= %s,3= %s,zc = %s\n",arr1,arr2,arr3,zc);
    return 0;
}
    
