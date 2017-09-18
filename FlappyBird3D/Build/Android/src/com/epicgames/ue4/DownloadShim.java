package com.epicgames.ue4;

import com.feureau.flappybird.OBBDownloaderService;
import com.feureau.flappybird.DownloaderActivity;


public class DownloadShim
{
	public static OBBDownloaderService DownloaderService;
	public static DownloaderActivity DownloadActivity;
	public static Class<DownloaderActivity> GetDownloaderType() { return DownloaderActivity.class; }
}

