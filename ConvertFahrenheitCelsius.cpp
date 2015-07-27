void convert( float &t_f) {
float t_c; //celsius
t_c = (t_f - 32) x (5.0 / 9.0);
printf("The result of the conversion is",t_c);
}

float main()
{
float t_f;//Tepmerature Fahrenheit
printf('Enter the temperature Fahrenheit');
scanf("%d",&t_f);
convert(t_f);
}
