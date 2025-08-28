/* generated common source file - do not edit */
#include "common_data.h"
mmu_instance_ctrl_t g_mmu_ctrl;
const mmu_cfg_t g_mmu_cfg;
/* Instance structure to use this module. */
const mmu_instance_t g_mmu =
{ .p_api = &g_mmu_on_mmu, .p_ctrl = &g_mmu_ctrl, .p_cfg = &g_mmu_cfg, };
/** IOPORT interface configuration for event link **/

ioport_event_group_output_t g_port_group_output_cfg[] =
{
{ .pin_select = (uint8_t) (uintptr_t) NULL, .operation = (ioport_event_output_operation_t) NULL }, };

ioport_event_group_input_t g_port_group_input_cfg[] =
{
{ .event_control = (ioport_event_control_t) NULL,
  .edge_detection = (ioport_event_detection_t) NULL,
  .overwrite_control = (ioport_event_control_t) NULL,
  .pin_select = (uintptr_t) NULL,
  .buffer_init_value = (uintptr_t) NULL }, };

ioport_event_single_t g_single_port_cfg[] =
{
{ .event_control = (ioport_event_control_t) NULL, .direction = (ioport_event_direction_t) NULL, .port_num =
          (uintptr_t) NULL,
  .operation = (ioport_event_output_operation_t) NULL, .edge_detection = (ioport_event_detection_t) NULL }, };

const ioport_extend_cfg_t g_ioport_cfg_extend =
{ .p_port_group_output_cfg = &g_port_group_output_cfg[0],
  .p_port_group_input_cfg = &g_port_group_input_cfg[0],
  .p_single_port_cfg = &g_single_port_cfg[0] };

ioport_instance_ctrl_t g_ioport_ctrl;
const ioport_instance_t g_ioport =
{ .p_api = &g_ioport_on_ioport, .p_ctrl = &g_ioport_ctrl, .p_cfg = &g_bsp_pin_cfg, };
void g_common_init(void)
{
}
