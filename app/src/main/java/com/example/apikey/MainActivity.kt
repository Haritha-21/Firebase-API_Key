package com.example.apikey

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    object Keys {
        init {
            System.loadLibrary("native-lib")
        }
        external fun apiKey(): String
    }
}

