
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct uart_softc {void* dlh; void* dll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_softc*,int) ;

__attribute__((used)) static void
FUNC_1(struct uart_softc *VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = VAR_1 / VAR_0 / 16;
 VAR_2->dll = (uint8_t) VAR_3;
 VAR_2->dlh = (uint8_t) (VAR_3 >> 16);

 FUNC_0(VAR_2, 1);
}
