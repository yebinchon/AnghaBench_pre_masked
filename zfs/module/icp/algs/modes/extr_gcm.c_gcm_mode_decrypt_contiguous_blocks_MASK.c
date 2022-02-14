
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {size_t gcm_pt_buf_len; char* gcm_pt_buf; size_t gcm_processed_data_len; scalar_t__ gcm_remainder_len; int gcm_kmflag; } ;
typedef TYPE_1__ gcm_ctx_t ;
typedef int crypto_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,size_t) ;

int
FUNC_3(gcm_ctx_t *VAR_2, char *VAR_3, size_t VAR_4,
    crypto_data_t *VAR_5, size_t VAR_6,
    int (*VAR_7)(const void *, const uint8_t *, uint8_t *),
    void (*VAR_8)(uint8_t *, uint8_t *),
    void (*VAR_9)(uint8_t *, uint8_t *))
{
 size_t VAR_10;
 uint8_t *VAR_11;





 if (VAR_4 > 0) {
  VAR_10 = VAR_2->gcm_pt_buf_len + VAR_4;
  VAR_11 = FUNC_1(VAR_10, VAR_2->gcm_kmflag);
  FUNC_0(VAR_2->gcm_pt_buf, VAR_11, VAR_2->gcm_pt_buf_len);
  FUNC_2(VAR_2->gcm_pt_buf, VAR_2->gcm_pt_buf_len);
  if (VAR_11 == ((void*)0))
   return (VAR_0);

  VAR_2->gcm_pt_buf = VAR_11;
  VAR_2->gcm_pt_buf_len = VAR_10;
  FUNC_0(VAR_3, &VAR_2->gcm_pt_buf[VAR_2->gcm_processed_data_len],
      VAR_4);
  VAR_2->gcm_processed_data_len += VAR_4;
 }

 VAR_2->gcm_remainder_len = 0;
 return (VAR_1);
}
