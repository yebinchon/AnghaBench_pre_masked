
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int Node_format ;
typedef int DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(DHT *VAR_2, Node_format *VAR_3, Node_format *VAR_4, uint8_t *VAR_5)
{
    uint8_t VAR_6[sizeof(Node_format) + VAR_1];
    FUNC_0(VAR_6, VAR_4, sizeof(Node_format));
    FUNC_0(VAR_6 + sizeof(Node_format), VAR_5, VAR_1);
    return FUNC_1(VAR_2, VAR_3, VAR_0, VAR_6, sizeof(Node_format) + VAR_1);
}
