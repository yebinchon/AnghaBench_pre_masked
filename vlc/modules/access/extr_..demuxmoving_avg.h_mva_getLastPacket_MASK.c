
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mva_packet_s {int dummy; } ;
struct moving_average_s {int i_packet; struct mva_packet_s* packets; } ;


 int VAR_0 ;

__attribute__((used)) static struct mva_packet_s * FUNC_0(struct moving_average_s *VAR_1)
{
    return VAR_1->i_packet > 0 ? &VAR_1->packets[(VAR_1->i_packet - 1) % VAR_0] : ((void*)0);
}
