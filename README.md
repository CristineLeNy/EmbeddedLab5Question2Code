# EmbeddedLab5Question2Code
Code for Question 2 of the fifth lab within Rowan University Embedded Class (2021).

For the lab, we had to change the brightness of the LED using a software PWM. The frequency for this project is 2Hz. The period that was used is 500ms and the duty cycle is at 10%.

For this question, I used a software PWM. I used the TASSEL_2 clock since it had 1 megahertz frequency. I also used the divider ID_3 since it would shrink the value needed for TACCRO. I decided to use the MOD_1 so that it would be in up mode. This allows for me to change the brighness of the LED progressivly. The TACCRO value was 62499 and TACCR1 value is 6249.9.
