
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct iovec {scalar_t__ iov_base; } ;
struct ck_info {int ck_start; int ck_off; int ck_len; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct iovec*,int,int,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct iovec *VAR_1, int VAR_2, struct ck_info *VAR_3)
{
 uint16_t VAR_4;
 int VAR_5;

 FUNC_0("tx cksum: iovcnt/s/off/len %d/%d/%d/%d\r\n",
     VAR_2, VAR_3->ck_start, VAR_3->ck_off, VAR_3->ck_len);
 VAR_5 = VAR_3->ck_len ? VAR_3->ck_len - VAR_3->ck_start + 1 : VAR_0;
 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3->ck_start, VAR_5);
    FUNC_2((uint8_t *)VAR_1[0].iov_base + VAR_3->ck_off, ~VAR_4);
}
