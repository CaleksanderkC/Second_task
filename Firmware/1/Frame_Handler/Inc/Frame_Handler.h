
#ifndef INC_FRAME_HANDLER_H_
#define INC_FRAME_HANDLER_H_

#endif /* INC_FRAME_HANDLER_H_ */


/** @brief Funkcje wywoływane po otrzymaniu zakończeniu przetwarzania ramki
 *  @param[in] len długość tablicy danych
 *  @param[in] wskażnik do tablicy danych
 *  @retval None
 */
void motor_set_mode(uint8_t len, uint8_t* payload);
void motor_set_speed(uint8_t len, uint8_t* payload);
void motor_set_pos(uint8_t len, uint8_t* payload);




/* @brief funckja wywołuje HAL_UART_Receive i przekazuje otrzymane dane do formawania ramki
 * @param[in] interfejs UART
 * @param[in] Czas oczekiwania na kolejny bajt
 * @retval HAL_StatusTypeDef
 */
HAL_StatusTypeDef FRAME_HANDLER_HAL_UART_Receive(UART_HandleTypeDef *huar, uint32_t Timeout);


/* @brief funkcja kasuje wszystkie dane poprzedniej ramki
 * @retval None
 */
void init_new_frame(void);
