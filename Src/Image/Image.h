#pragma once

#include"GLProgram\GLProgram_Texture.h"
#include"Texture2D\Texture2D.h"

class Image
{
public:
	Image(void);
	~Image(void);

public:
	void  Init(const char* varFilePath); //����ͼƬ������Texture;

	//����
	void Draw();


	//����λ��
	void SetPosition(float varPosX, float varPosY);


	//��������
	void SetScale(float varScaleX, float varScaleY);

private:
	GLProgram_Texture m_GLProgram;
	Texture2D* mTexture2D;

public:
	float mPosX;
	float mPosY;
	float mScaleX;
	float mScaleY;
};
