//		������������ֵ�˲�blur������ʹ��ʾ������
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp" 
using namespace cv; 

int main( )
{ 
	//��1������ԭʼͼ
	Mat srcImage=imread("../32_blur.jpg");

	//��2����ʾԭʼͼ
	imshow( "srcImage", srcImage );

	//��3�����о�ֵ�˲�����
	Mat dstImage; 
	blur( srcImage, dstImage, Size(7, 7)); 

	//��4����ʾЧ��ͼ
	imshow( "dstImage" ,dstImage );

	waitKey( 0 );     
} 