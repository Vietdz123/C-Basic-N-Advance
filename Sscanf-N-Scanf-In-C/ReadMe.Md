> # I. Sscanf() trong C

> Hàm này sẽ đọc dữ liệu từ buffer, tách dữ liệu từ buffer đó và lưu vào trong các buffer con.

> - Ta có VD **basic-sscan.c**;  </br>
> #include <stdio.h>                   </br>         
int main()      </br>
{               </br>
        char huy[30] ={0}, viet[30] = {0};      </br>
        char buffer[100] = "huyNgu va vietdz";  </br>
        sscanf(buffer,"%s va %s", huy, viet);   </br>
        printf("Data: %s va %s\n", huy, viet);  </br>
        return 0;       </br>
}       </br>
> - **Kết quả:** Data: huyNgu va vietdz </br>

> - Ta có VD ***advance-sscanf.c***;    </br>
> #include <stdio.h>    </br>
int main()      </br>
{
        char huy[30] ={0}, viet[30] = {0}, linh[30] = {0};      </br>
        char buffer[100] = "huyNgu nhu bo. va          vietdz vl, linhngu";     </br>
        sscanf(buffer,"%[a-zA-Z ]. va  %[^,],%s", huy, viet, linh);     </br>
        printf("Data: %s va %s va %s\n", huy, viet, linh);      </br>
        return 0;       </br>
}       </br>
> - **Kết quả:**: Data: huyNgu nhu bo va vietdz vl va linhngu

> # ***Chú ý quan trọng:***
> - **%[a-zA-Z ]**: Sẽ đọc tất cả kí tự từ a-z và A-Z và có kí tự space trong buffer buffer và lưu vào bufer nhỏ tương ứng.
>   - Như trong VD: biến *huy* bằng *huyNgu nhu bo*.
>   - Nếu sử dụng %s: thì chỉ lưu được huyNgu, đến khoảng trắng sẽ ko đọc nữa.
>
> - **%[^,]**: Sẽ đọc mọi kí tự ngoại trừ dấu **,**
>
> - Dù có bao nhiêu khoảng trắng và có sử dụng chấp nhận cả kí tự "cách", nhưng data chỉ được đọc từ kí tự khác kí tự "cách".

# II. Scanf() trong C

> Ngoài cách thông thường như scanf("%d", abc); thì ta có 1 cách nâng cao hơn.

> - Ta có VD ***advance-sscanf.c***;    </br>
> #include <stdio.h>    </br>
int main()      </br>
{
        char huy[30] ={0}, viet[30] = {0};      </br>
        char buffer[100] = "huyNgu va vietdz";  </br>
        printf("Enter Data to parse: ");        </br>
        scanf("%s %s", huy, viet);      </br>
        printf("Data: %s va %s\n", huy, viet);  </br>
        return 0;       </br>
}       </br>
>
> **Kết quả:** Enter Data to parse: vietdz huyngu
> Data: vietdz va huyngu
