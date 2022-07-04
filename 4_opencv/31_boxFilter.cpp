//		���������������˲�boxFilter������ʹ��ʾ������
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/imgproc/imgproc.hpp" 
using namespace cv; 
int main( )
{ 
	// ����ԭͼ
	Mat image=imread("../31_boxFilter.jpg");

	//��������
	namedWindow( "boxFilter1" );
	namedWindow( "boxFilter2");

	//��ʾԭͼ
	imshow( "boxFilter1", image );

	//���з����˲�����
	Mat out; 
	boxFilter( image, out, -1,Size(5, 5)); 

	//��ʾЧ��ͼ
	imshow( "boxFilter2" ,out );

	waitKey( 0 );     
} 