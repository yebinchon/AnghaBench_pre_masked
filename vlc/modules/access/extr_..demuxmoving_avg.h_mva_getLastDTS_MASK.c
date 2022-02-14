
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct mva_packet_s {int dts; } ;
struct moving_average_s {int dummy; } ;


 struct mva_packet_s* FUNC_0 (struct moving_average_s*) ;

__attribute__((used)) static vlc_tick_t FUNC_1(struct moving_average_s *VAR_0)
{
    struct mva_packet_s *VAR_1 = FUNC_0(VAR_0);
    return VAR_1 ? VAR_1->dts : 0;
}
